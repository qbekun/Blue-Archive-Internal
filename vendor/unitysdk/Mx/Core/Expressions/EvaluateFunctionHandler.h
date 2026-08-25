#pragma once
#include "../../../unitysdk.h"

class FunctionType;
namespace MX::Core::Expressions { class FunctionArgs; }

#define MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A690)
#define MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x106A760)
#define MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x106A770)
#define MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x106A7F0)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int EvaluateFunctionHandler_TypeDefinitionIndex = 12873;

	class EvaluateFunctionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(FunctionType* arg, ::MX::Core::Expressions::FunctionArgs* arg2)
		{
			((::System::Void(*)(FunctionType*, ::MX::Core::Expressions::FunctionArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(FunctionType* arg, ::MX::Core::Expressions::FunctionArgs* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(FunctionType*, ::MX::Core::Expressions::FunctionArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEFUNCTIONHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

