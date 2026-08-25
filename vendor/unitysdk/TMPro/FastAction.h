#pragma once
#include "../unitysdk.h"

#define TMPRO_FASTACTION_ADD_OFFSET UNITYSDK_OFFSET(0xA109BD0)
#define TMPRO_FASTACTION_REMOVE_OFFSET UNITYSDK_OFFSET(0xA109C80)
#define TMPRO_FASTACTION_CALL_OFFSET UNITYSDK_OFFSET(0xA109D30)
#define TMPRO_FASTACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA109DC0)

namespace TMPro
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 33599;

	class FastAction : public Il2CppObject
	{
	public:
		Il2CppObject* delegates; // 0x10
		Il2CppObject* lookup; // 0x18

		::System::Void Add(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Call()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_CALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

