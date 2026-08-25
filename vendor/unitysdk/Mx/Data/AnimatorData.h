#pragma once
#include "../../unitysdk.h"

namespace FlatData { class AnimatorData; }

#define MX_DATA_ANIMATORDATA_LOADDATAFROMTABLES_OFFSET UNITYSDK_OFFSET(0x1873630)
#define MX_DATA_ANIMATORDATA_VALIDATEDATA_OFFSET UNITYSDK_OFFSET(0x1873890)
#define MX_DATA_ANIMATORDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18738A0)
#define MX_DATA_ANIMATORDATA_VALIDATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1873920)
#define MX_DATA_ANIMATORDATA_LOADALLTABLESFROMASSET_OFFSET UNITYSDK_OFFSET(0x1873A90)
#define MX_DATA_ANIMATORDATA_LOADALLTABLESFROMFILE_OFFSET UNITYSDK_OFFSET(0x1873AD0)
#define MX_DATA_ANIMATORDATA_GETSTATEDATA_OFFSET UNITYSDK_OFFSET(0x1873AE0)
#define MX_DATA_ANIMATORDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1873C50)

namespace MX::Data
{
	inline static constexpr unsigned int AnimatorData_TypeDefinitionIndex = 15952;

	class AnimatorData : public Il2CppObject
	{
	public:
		Il2CppObject* animatorDataDictionary; // 0x18

		::System::Void LoadDataFromTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_LOADDATAFROMTABLES_OFFSET))(nullptr);
		}

		::System::Boolean ValidateData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_VALIDATEDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValidateExcel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_VALIDATEEXCEL_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_LOADALLTABLESFROMASSET_OFFSET))(nullptr);
		}

		::System::Void LoadAllTablesFromFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_LOADALLTABLESFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetStateData(::FlatData::AnimatorData* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::FlatData::AnimatorData*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_GETSTATEDATA_OFFSET))(arg, str, nullptr);
		}

		::FlatData::AnimatorData* GetData(::System::String* str)
		{
			return (return (::FlatData::AnimatorData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ANIMATORDATA_GETDATA_OFFSET))(str, nullptr);
		}

	};
}

