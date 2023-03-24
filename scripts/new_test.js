// this file encourages extremely unreadable, easy to forget syntax
// but it has to because I'm just not going to write the tests if it takes so fucking
// long to type everything out myself

const [filename, ...types] = Deno.args;
// eg. window_border_width i i,i

const tests = [];

const typenames = {
  f: "float",
  "-f": "signed_float",
  i: "int",
  "-i": "signed_int",
  s: "string",
  g: "glob_pattern",
  h: "hex_color",
  n: "none",
};

const typevals = {
  float: ["5", "0.0", "1.0", "0.5", "12"],
  int: ["0", "1", "50"],
  signed_float: [],
  signed_int: [],
  string: [],
  hex_color: [],
};

const pickRandom = array => array[Math.floor(Math.random() * array.length)];
const getFullTypeName = name => typenames[name] ?? name;
const getValueForType = name =>
  name in typevals && typevals[name].length > 0
    ? pickRandom(typevals[name])
    : "!!TODO!!";

for (const type of types) {
  const typeNames = type.split(",").map(getFullTypeName);
  const template = `
==================
${filename} ${typeNames.join(" ")}
==================

${filename} ${typeNames.map(t => getValueForType(getFullTypeName)).join(" ")}

---

(source_file
  (${filename}
    ${typeNames.map(t => `(${t})`).join(" ")}))
`.trim();
  tests.push(template);
}
Deno.writeTextFileSync(`corpus/${filename}.txt`, tests.join("\n\n"));
