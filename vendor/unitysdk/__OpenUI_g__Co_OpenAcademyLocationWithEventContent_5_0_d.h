#pragma once
#include "unitysdk.h"

class EventScheduleLocationOpener;

#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C6B40)
#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26C6C50)
#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26C6C60)
#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C6E20)
#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26C6E30)
#define <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C6E80)

	inline static constexpr unsigned int <<OpenUI>g__Co_OpenAcademyLocationWithEventContent|5_0>d_TypeDefinitionIndex = 6985;

	class <<OpenUI>g__Co_OpenAcademyLocationWithEventContent|5_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EventScheduleLocationOpener* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<OPENUI>G__CO_OPENACADEMYLOCATIONWITHEVENTCONTENT|5_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

