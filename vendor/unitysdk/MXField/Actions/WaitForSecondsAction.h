#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class WaitForSecondsAction; }

#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF7A00)
#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF7A10)
#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF7A50)
#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF7AE0)
#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF7B30)
#define MXFIELD_ACTIONS_WAITFORSECONDSACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEF7C30)

namespace MXField::Actions
{
	inline static constexpr unsigned int WaitForSecondsAction_TypeDefinitionIndex = 11138;

	class WaitForSecondsAction : public Il2CppObject
	{
	public:
		::System::Single seconds; // 0x40
		::System::Boolean realtime; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Actions::WaitForSecondsAction* arg)
		{
			return ((::System::Boolean(*)(::MXField::Actions::WaitForSecondsAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_WAITFORSECONDSACTION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

