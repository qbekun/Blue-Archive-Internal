#pragma once
#include "unitysdk.h"

class UIWorldRaidEnterParcel;
namespace UnityEngine { class WaitForSeconds; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class CurrencyExcel; }

#define <COTIMERUPDATE>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFEBE0)
#define <COTIMERUPDATE>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFEC00)
#define <COTIMERUPDATE>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBFEC10)
#define <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFF3D0)
#define <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBFF3E0)
#define <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBFF430)

	inline static constexpr unsigned int <CoTimerUpdate>d__9_TypeDefinitionIndex = 8777;

	class <CoTimerUpdate>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIWorldRaidEnterParcel* __4__this; // 0x20
		::UnityEngine::WaitForSeconds* _waitForSecond_5__2; // 0x28
		::MX::GameLogic::Parcel::ParcelInfo* _parcelInfo_5__3; // 0x30
		::MX::Data::Excel::CurrencyExcel* _currencyExcel_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTIMERUPDATE>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

