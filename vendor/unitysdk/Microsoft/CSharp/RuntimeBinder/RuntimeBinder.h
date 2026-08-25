#pragma once
#include "../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionBinder; }
namespace Microsoft::CSharp::RuntimeBinder { class ICSharpBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Scope; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpArgumentInfo; }
namespace Microsoft::CSharp::RuntimeBinder { class ICSharpInvokeOrInvokeMemberBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWithArgs; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprBoundLambda; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LocalVariableSymbol; }
namespace Microsoft::CSharp::RuntimeBinder { class ArgumentObject; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprMemberGroup; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class BindingFlag; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EventWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprCall; }
namespace Microsoft::CSharp::RuntimeBinder { class CSharpUnaryOperationBinder; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class OperatorKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9083330)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x9081660)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDCORE_OFFSET UNITYSDK_OFFSET(0x90881E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_DEFERBINDING_OFFSET UNITYSDK_OFFSET(0x9088B20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEEXPRESSIONTREEFROMRESULT_OFFSET UNITYSDK_OFFSET(0x90890A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETARGUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90898E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTARRAY_OFFSET UNITYSDK_OFFSET(0x90884C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_POPULATESYMBOLTABLEWITHPAYLOADINFORMATION_OFFSET UNITYSDK_OFFSET(0x90838A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_ADDCONVERSIONSFORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9088780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_DISPATCHPAYLOAD_OFFSET UNITYSDK_OFFSET(0x90837C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_POPULATELOCALSCOPE_OFFSET UNITYSDK_OFFSET(0x9088810)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GENERATEBOUNDLAMBDA_OFFSET UNITYSDK_OFFSET(0x90898B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATELOCAL_OFFSET UNITYSDK_OFFSET(0x908A8F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTLISTEXPR_OFFSET UNITYSDK_OFFSET(0x908AC80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTEXPR_OFFSET UNITYSDK_OFFSET(0x908ADE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEMEMBERGROUPEXPR_OFFSET UNITYSDK_OFFSET(0x908B010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x908BD40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEINDEXER_OFFSET UNITYSDK_OFFSET(0x908C410)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARRAY_OFFSET UNITYSDK_OFFSET(0x908CBC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEFIELD_OFFSET UNITYSDK_OFFSET(0x908CDF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATECALLINGOBJECTFORCALL_OFFSET UNITYSDK_OFFSET(0x9089120)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDCALL_OFFSET UNITYSDK_OFFSET(0x9089C10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDWINRTEVENTACCESSOR_OFFSET UNITYSDK_OFFSET(0x908D8B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CHECKFORCONDITIONALMETHODERROR_OFFSET UNITYSDK_OFFSET(0x908E2A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_REORDERARGUMENTSFORNAMEDANDOPTIONAL_OFFSET UNITYSDK_OFFSET(0x908C800)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_STRIPNAMEDARGUMENT_OFFSET UNITYSDK_OFFSET(0x908E740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_STRIPNAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x908E7F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDUNARYOPERATION_OFFSET UNITYSDK_OFFSET(0x9084E90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETOPERATORKIND_OFFSET UNITYSDK_OFFSET(0x908E930)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETOPERATORKIND_OFFSET UNITYSDK_OFFSET(0x908FB30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDPROPERTY_OFFSET UNITYSDK_OFFSET(0x90827E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDIMPLICITCONVERSION_OFFSET UNITYSDK_OFFSET(0x908D570)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x9084610)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9090330)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int RuntimeBinder_TypeDefinitionIndex = 34441;

	class RuntimeBinder : public Il2CppObject
	{
	public:
		::System::Object* s_bindLock; // 0x0
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionBinder* _binder; // 0x10

		::System::Void .ctor(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* Bind(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject&* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BIND_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* BindCore(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject&* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDCORE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean DeferBinding(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_DEFERBINDING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* CreateExpressionTreeFromResult(::Il2CppArray<::System::Object*>* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEEXPRESSIONTREEFROMRESULT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* GetArgumentType(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo* arg, ::System::Linq::Expressions::Expression* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Microsoft::CSharp::RuntimeBinder::CSharpArgumentInfo*, ::System::Linq::Expressions::Expression*, ::System::Dynamic::DynamicMetaObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETARGUMENTTYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateArgumentArray(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PopulateSymbolTableWithPayloadInformation(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_POPULATESYMBOLTABLEWITHPAYLOADINFORMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddConversionsForArguments(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_ADDCONVERSIONSFORARGUMENTS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* DispatchPayload(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_DISPATCHPAYLOAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PopulateLocalScope(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_POPULATELOCALSCOPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda* GenerateBoundLambda(::Microsoft::CSharp::RuntimeBinder::Semantics::Scope* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprBoundLambda*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Scope*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GENERATEBOUNDLAMBDA_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateLocal(::System::Type* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::System::Type*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATELOCAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateArgumentListEXPR(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTLISTEXPR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateArgumentEXPR(::Microsoft::CSharp::RuntimeBinder::ArgumentObject* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::ArgumentObject*, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARGUMENTEXPR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup* CreateMemberGroupExpr(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprMemberGroup*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEMEMBERGROUPEXPR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* CreateIndexer(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::BindingFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEINDEXER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateArray(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEARRAY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateField(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATEFIELD_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* CreateCallingObjectForCall(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CREATECALLINGOBJECTFORCALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* BindCall(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpInvokeOrInvokeMemberBinder*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDCALL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* BindWinRTEventAccessor(::Microsoft::CSharp::RuntimeBinder::Semantics::EventWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EventWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDWINRTEVENTACCESSOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckForConditionalMethodError(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExprCall*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_CHECKFORCONDITIONALMETHODERROR_OFFSET))(arg, nullptr);
		}

		::System::Void ReorderArgumentsForNamedAndOptional(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWithArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_REORDERARGUMENTSFORNAMEDANDOPTIONAL_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* StripNamedArgument(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_STRIPNAMEDARGUMENT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* StripNamedArguments(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_STRIPNAMEDARGUMENTS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindUnaryOperation(::Microsoft::CSharp::RuntimeBinder::CSharpUnaryOperationBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::CSharpUnaryOperationBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDUNARYOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* GetOperatorKind(::System::Linq::Expressions::ExpressionType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*(*)(::System::Linq::Expressions::ExpressionType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETOPERATORKIND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind* GetOperatorKind(::System::Linq::Expressions::ExpressionType* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::OperatorKind*(*)(::System::Linq::Expressions::ExpressionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_GETOPERATORKIND_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindProperty(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Microsoft::CSharp::RuntimeBinder::ArgumentObject* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Microsoft::CSharp::RuntimeBinder::ArgumentObject*, ::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDPROPERTY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindImplicitConversion(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDIMPLICITCONVERSION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* BindAssignment(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::Microsoft::CSharp::RuntimeBinder::ICSharpBinder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_BINDASSIGNMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

