#pragma once
#include "unitysdk.h"

class UIPotentialGrowth;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define <CO_SHOWLEVELUPDISPLAY>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x272BEE0)
#define <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x272D3B0)
#define <CO_SHOWLEVELUPDISPLAY>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x272D3C0)
#define <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x272D9A0)
#define <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x272D9B0)
#define <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x272DA00)

	inline static constexpr unsigned int <Co_ShowLevelUpDisplay>d__30_TypeDefinitionIndex = 7180;

	class <Co_ShowLevelUpDisplay>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPotentialGrowth* __4__this; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* parcelResultDB; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWLEVELUPDISPLAY>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

