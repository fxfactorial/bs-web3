type t = {
  .
  "version": string,
  "modules": {
    .
    "Eth": Eth.t,
    "Net": Net.t,
    "Personal": Personal.t,
    "Shh": Shh.t,
    "Bzz": Bzz.t
  },
  "utils": Utils.t,
  /* [@bs.meth]"setProvider": Types. */
  /* [@bs.meth] "isConnected": unit => Js.boolean */
  /* "providers": */
  "givenProvider": Js.nullable(string),
  "currentProvider": Js.nullable(string)
};

[@bs.new] [@bs.module] external makeWeb3 : unit => t = "web3";

[@bs.new] [@bs.module "web3"]
external makeBatchRequest : unit => Types.batch = "BatchRequest";
