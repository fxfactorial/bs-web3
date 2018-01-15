/* type t = { */
/*   . */
/* ""     */
/* }; */
/* type t = Js.t(class type _ in inherit Types._module); */
type t;

/* class type bazz = [@bs]{ */
/*   inherit (t) Types._module */
/* }; */
[@bs.new] [@bs.module]
external make : [@bs.unwrap] (Types.provider_init_arg => t) = "web3-eth";
/* [@bs.new] [@bs.module] */
/* external make : Types.provider_init_arg => t = "web3-eth"; */
/* type provider_t; */
/* type provider_init_arg(_) = */
/*   | Provider: provider_init_arg(provider_t) */
/*   | Provider_url(string): provider_init_arg(string); */
/* [@bs.new] [@bs.module] */
/* external make : ([@bs.ignore] provider_init_arg('impl), 'impl) => t = */
/*   "web3-eth"; */
