#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class PermanentRaidManageExcel; }
namespace FlatData { class ContentType; }

#define MX_DATA_PERMANENTRAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856CA0)
#define MX_DATA_PERMANENTRAIDSEASONINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1856EE0)

namespace MX::Data
{
	inline static constexpr unsigned int PermanentRaidSeasonInfo_TypeDefinitionIndex = 15870;

	class PermanentRaidSeasonInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::Data::Excel::PermanentRaidManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::PermanentRaidManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PERMANENTRAIDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PERMANENTRAIDSEASONINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

