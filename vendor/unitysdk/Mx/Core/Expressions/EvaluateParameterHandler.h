#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Expressions { class ParameterArgs; }

#define MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x106A800)
#define MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x106A8D0)
#define MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x106A8E0)
#define MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x106A8F0)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int EvaluateParameterHandler_TypeDefinitionIndex = 12874;

	class EvaluateParameterHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::MX::Core::Expressions::ParameterArgs* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Core::Expressions::ParameterArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::MX::Core::Expressions::ParameterArgs* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::System::String*, ::MX::Core::Expressions::ParameterArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_EVALUATEPARAMETERHANDLER_BEGININVOKE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

	};
}

