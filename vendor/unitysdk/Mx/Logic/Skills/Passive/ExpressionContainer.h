#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Expressions { class Expression; }

#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13FFE40)
#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_REGISTERENUMPARAMS_OFFSET UNITYSDK_OFFSET(0x1400FA0)
#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_REGISTERFUNCTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0x1402BB0)
#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1400A20)
#define MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1402C20)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int ExpressionContainer_TypeDefinitionIndex = 14665;

	class ExpressionContainer : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Expression* expression; // 0x10

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_EVALUATE_OFFSET))(nullptr);
		}

		::System::Void RegisterEnumParams(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_REGISTERENUMPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFunctions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_REGISTERFUNCTIONS_OFFSET))(nullptr);
		}

		::System::Void SetParameter(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_SETPARAMETER_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_EXPRESSIONCONTAINER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

