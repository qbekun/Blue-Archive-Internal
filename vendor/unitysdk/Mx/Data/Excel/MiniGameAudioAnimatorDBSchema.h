#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D080)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_SET_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8D090)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_GET_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8D0A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameAudioAnimatorDBSchema_TypeDefinitionIndex = 18438;

	class MiniGameAudioAnimatorDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _ControllerNameHash_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ControllerNameHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_SET_CONTROLLERNAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_ControllerNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATORDBSCHEMA_GET_CONTROLLERNAMEHASH_OFFSET))(nullptr);
		}

	};
}

