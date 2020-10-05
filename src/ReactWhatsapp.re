[@bs.module "react-whatsapp"]
external whatsapp: ReasonReact.reactClass = "default";

[@bs.obj]
external makeProps:
  (~number: int=?, ~message: string=?, ~element: React.element=?, unit) => _;

let make =
    (
      ~number: option(int)=?,
      ~message: option(string)=?,
      ~element: option(React.element)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=whatsapp,
    ~props=makeProps(~number?, ~message?, ~element?, ()),
    children,
  );
