#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace MX::Data::Excel { class MiniGameRhythmExcel; }

#define MX_DATA_MINIGAMERHYTHMDATA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18F9190)
#define MX_DATA_MINIGAMERHYTHMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F91A0)
#define MX_DATA_MINIGAMERHYTHMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18F9320)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameRhythmData_TypeDefinitionIndex = 16189;

	class MiniGameRhythmData : public Il2CppObject
	{
	public:
		::FlatData::EventContentType* get_ContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMDATA_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameRhythmExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameRhythmExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

