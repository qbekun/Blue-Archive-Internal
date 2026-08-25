#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class EventContentStageProgressSaveData; }
class UIEventLobby;
namespace MX::Data::Excel { class EventContentStageExcel; }

#define <>C__DISPLAYCLASS77_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2444900)
#define <>C__DISPLAYCLASS77_1__ONOPENED_B__6_OFFSET UNITYSDK_OFFSET(0x2444910)

	inline static constexpr unsigned int <>c__DisplayClass77_1_TypeDefinitionIndex = 5522;

	class <>c__DisplayClass77_1 : public Il2CppObject
	{
	public:
		::MX::SaveData::EventContentStageProgressSaveData* progressData; // 0x10
		UIEventLobby* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnOpened_b__6(::MX::Data::Excel::EventContentStageExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_1__ONOPENED_B__6_OFFSET))(arg, nullptr);
		}

	};

