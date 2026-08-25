#pragma once
#include "unitysdk.h"

namespace MX::Audio { class BGMPlayer; }

#define <CO_CHANGEDDEVICE>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C520)
#define <CO_CHANGEDDEVICE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4EAB0)
#define <CO_CHANGEDDEVICE>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4EAC0)
#define <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4EBD0)
#define <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D4EBE0)
#define <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4EC30)

	inline static constexpr unsigned int <co_ChangedDevice>d__19_TypeDefinitionIndex = 20176;

	class <co_ChangedDevice>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::BGMPlayer* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGEDDEVICE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

