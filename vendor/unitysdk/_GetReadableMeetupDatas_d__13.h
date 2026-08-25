#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentMeetupData; }
namespace MX::Data { class EventContentData; }

#define <GETREADABLEMEETUPDATAS>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0xFA7BC0)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xFAA320)
#define <GETREADABLEMEETUPDATAS>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFAA380)
#define <GETREADABLEMEETUPDATAS>D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xFAA7D0)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EVENTCONTENTMEETUPDATA_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFAA820)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xFAA830)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFAA880)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EVENTCONTENTMEETUPDATA_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFAA890)
#define <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFAA940)

	inline static constexpr unsigned int <GetReadableMeetupDatas>d__13_TypeDefinitionIndex = 12334;

	class <GetReadableMeetupDatas>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::EventContentMeetupData* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::EventContentData* eventContentData; // 0x28
		::MX::Data::EventContentData* __3__eventContentData; // 0x30
		::System::Int64 eventContentId; // 0x38
		::System::Int64 __3__eventContentId; // 0x40
		Il2CppObject* readScenarioGroupHistoryDBs; // 0x48
		Il2CppObject* __3__readScenarioGroupHistoryDBs; // 0x50
		Il2CppObject* _readScenarioGroupIds_5__2; // 0x58
		Il2CppObject* __7__wrap2; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::EventContentMeetupData* System.Collections.Generic.IEnumerator_MX.Data.EventContentMeetupData_.get_Current()
		{
			return ((::MX::Data::EventContentMeetupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EVENTCONTENTMEETUPDATA_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.EventContentMeetupData_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EVENTCONTENTMEETUPDATA_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREADABLEMEETUPDATAS>D__13_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

