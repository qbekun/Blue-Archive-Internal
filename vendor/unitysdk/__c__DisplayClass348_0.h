#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class EventContentLobbyMenuExcel; }

#define <>C__DISPLAYCLASS348_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D68E0)
#define <>C__DISPLAYCLASS348_0__TRYGETLOBBYMENUEXCELCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D68F0)
#define <>C__DISPLAYCLASS348_0__TRYGETLOBBYMENUEXCELCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D6920)

	inline static constexpr unsigned int <>c__DisplayClass348_0_TypeDefinitionIndex = 16112;

	class <>c__DisplayClass348_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS348_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetLobbyMenuExcelClient_b__0(::MX::Data::Excel::EventContentLobbyMenuExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentLobbyMenuExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS348_0__TRYGETLOBBYMENUEXCELCLIENT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _TryGetLobbyMenuExcelClient_b__1(::MX::Data::Excel::EventContentLobbyMenuExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentLobbyMenuExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS348_0__TRYGETLOBBYMENUEXCELCLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

