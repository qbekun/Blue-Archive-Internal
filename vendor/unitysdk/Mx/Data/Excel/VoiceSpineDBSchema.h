#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICESPINEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB6A50)
#define MX_DATA_EXCEL_VOICESPINEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CB6A60)
#define MX_DATA_EXCEL_VOICESPINEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceSpineDBSchema_TypeDefinitionIndex = 19709;

	class VoiceSpineDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Id_k__BackingField; // 0x20

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICESPINEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

