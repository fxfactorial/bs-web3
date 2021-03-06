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

[@bs.new] [@bs.module "web3"] [@bs.scope "eth"]
external makeBatchRequest : unit => Types.batch = "BatchRequest";
