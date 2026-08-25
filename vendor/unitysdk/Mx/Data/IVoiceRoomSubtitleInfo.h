#pragma once
#include "../../unitysdk.h"

#define MX_DATA_IVOICEROOMSUBTITLEINFO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IVOICEROOMSUBTITLEINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IVOICEROOMSUBTITLEINFO_GET_ISSEPARATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IVoiceRoomSubtitleInfo_TypeDefinitionIndex = 15849;

	class IVoiceRoomSubtitleInfo : public Il2CppObject
	{
	public:
		::System::Int64 get_Duration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IVOICEROOMSUBTITLEINFO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IVOICEROOMSUBTITLEINFO_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSeparate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IVOICEROOMSUBTITLEINFO_GET_ISSEPARATE_OFFSET))(nullptr);
		}

	};
}

