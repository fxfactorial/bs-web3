/* type t = { */
/*   . */
/* ""     */
/* }; */
/* type t = Js.t(class type _ in inherit Types._module); */
type t = Js.t(Types.eth);

type provider;

external make :
  ([@bs.unwrap] [ | `provider(provider) | `provider_url(string)]) => t =
  "web3-eth";
