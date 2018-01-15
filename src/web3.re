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
  }
  /* [@bs.meth]"setProvider":  */
  /* [@bs.meth] "isConnected": unit => Js.boolean */
};

[@bs.new] [@bs.module] external make : unit => t = "web3";
