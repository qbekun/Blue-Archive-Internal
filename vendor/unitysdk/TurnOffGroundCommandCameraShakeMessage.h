#pragma once
#include "unitysdk.h"

#define TURNOFFGROUNDCOMMANDCAMERASHAKEMESSAGE_GET_COMMANDID_OFFSET UNITYSDK_OFFSET(0x15ACFD0)
#define TURNOFFGROUNDCOMMANDCAMERASHAKEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x15ACFE0)

	inline static constexpr unsigned int TurnOffGroundCommandCameraShakeMessage_TypeDefinitionIndex = 1124;

	class TurnOffGroundCommandCameraShakeMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::String* _CommandId_k__BackingField; // 0x18

		::System::String* get_CommandId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TURNOFFGROUNDCOMMANDCAMERASHAKEMESSAGE_GET_COMMANDID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TURNOFFGROUNDCOMMANDCAMERASHAKEMESSAGE_.CTOR_OFFSET))(str, nullptr);
		}

	};

