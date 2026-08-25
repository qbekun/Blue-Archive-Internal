#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGSkillContext; }

#define CCGSKILLLOGSTACK_SET_LOGS_OFFSET UNITYSDK_OFFSET(0x1E3A700)
#define CCGSKILLLOGSTACK_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E3A710)
#define CCGSKILLLOGSTACK_SET_HASACTION_OFFSET UNITYSDK_OFFSET(0x1E3A720)
#define CCGSKILLLOGSTACK_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E3A730)
#define CCGSKILLLOGSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A740)
#define CCGSKILLLOGSTACK_GET_HASACTION_OFFSET UNITYSDK_OFFSET(0x1E3A7C0)
#define CCGSKILLLOGSTACK_GET_LOGS_OFFSET UNITYSDK_OFFSET(0x1E3A7D0)

	inline static constexpr unsigned int CCGSkillLogStack_TypeDefinitionIndex = 21054;

	class CCGSkillLogStack : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGSkillContext* _Context_k__BackingField; // 0x10
		Il2CppObject* _Logs_k__BackingField; // 0x18
		::System::Boolean _HasAction_k__BackingField; // 0x20

		::System::Void set_Logs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_SET_LOGS_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillContext* get_Context()
		{
			return (return (::MX::MinigameCCG::CCGSkillContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_HasAction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_SET_HASACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Context(::MX::MinigameCCG::CCGSkillContext* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGSkillContext*, ::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_GET_HASACTION_OFFSET))(nullptr);
		}

		Il2CppObject* get_Logs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGSKILLLOGSTACK_GET_LOGS_OFFSET))(nullptr);
		}

	};

