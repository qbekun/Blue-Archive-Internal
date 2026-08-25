#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class IdCardBackgroundExcel&; }

#define MX_DATA_FRIENDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DCE70)
#define MX_DATA_FRIENDDATA_GETBGPATH_OFFSET UNITYSDK_OFFSET(0x18DCEF0)
#define MX_DATA_FRIENDDATA_GET_BACKGROUNDEXCELS_OFFSET UNITYSDK_OFFSET(0x18DCFA0)
#define MX_DATA_FRIENDDATA_GET_BGIDS_OFFSET UNITYSDK_OFFSET(0x18DCFF0)
#define MX_DATA_FRIENDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DD040)
#define MX_DATA_FRIENDDATA_TRYGETBGEXCEL_OFFSET UNITYSDK_OFFSET(0x18DD410)

namespace MX::Data
{
	inline static constexpr unsigned int FriendData_TypeDefinitionIndex = 16134;

	class FriendData : public Il2CppObject
	{
	public:
		Il2CppObject* backgroundExcels; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetBgPath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_GETBGPATH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BackgroundExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_GET_BACKGROUNDEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* get_BgIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_GET_BGIDS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetBgExcel(::System::Int64 arg, ::MX::Data::Excel::IdCardBackgroundExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::IdCardBackgroundExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FRIENDDATA_TRYGETBGEXCEL_OFFSET))(arg, arg, nullptr);
		}

	};
}

