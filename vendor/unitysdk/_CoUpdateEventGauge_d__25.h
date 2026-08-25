#pragma once
#include "unitysdk.h"

class UIDreammaker_DailyResult;
namespace MX::Data { class EventContentStageTotalRewardInfo; }

#define <COUPDATEEVENTGAUGE>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0xB9AF40)
#define <COUPDATEEVENTGAUGE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9BCC0)
#define <COUPDATEEVENTGAUGE>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB9BCD0)
#define <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C6C0)
#define <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB9C6D0)
#define <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB9C720)

	inline static constexpr unsigned int <CoUpdateEventGauge>d__25_TypeDefinitionIndex = 588;

	class <CoUpdateEventGauge>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIDreammaker_DailyResult* __4__this; // 0x20
		Il2CppObject* _stageTotalRewardInfoList_5__2; // 0x28
		::MX::Data::EventContentStageTotalRewardInfo* _nextReward_5__3; // 0x30
		::System::Single _receivedEventPoint_5__4; // 0x38
		::System::Single _restPoint_5__5; // 0x3C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATEEVENTGAUGE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

