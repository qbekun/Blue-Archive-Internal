#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5460)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CB5470)
#define MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceRoomExceptionDBSchema_TypeDefinitionIndex = 19702;

	class VoiceRoomExceptionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CostumeUniqueId_k__BackingField; // 0x20

		::System::Void set_CostumeUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEROOMEXCEPTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

