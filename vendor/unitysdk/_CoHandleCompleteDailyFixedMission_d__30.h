#pragma once
#include "unitysdk.h"

class UIEventMission;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B5A80)
#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24B7CA0)
#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24B7CB0)
#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24B7E90)
#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24B7EA0)
#define <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24B7EF0)

	inline static constexpr unsigned int <CoHandleCompleteDailyFixedMission>d__30_TypeDefinitionIndex = 5863;

	class <CoHandleCompleteDailyFixedMission>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventMission* __4__this; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* parcelResultDB; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHANDLECOMPLETEDAILYFIXEDMISSION>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

