#pragma once
#include "unitysdk.h"

namespace MXField { class FieldBridge; }

#define <OPENPOPUPONSTAGECLEAR>D__68_.CTOR_OFFSET UNITYSDK_OFFSET(0xE634B0)
#define <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE67810)
#define <OPENPOPUPONSTAGECLEAR>D__68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE67820)
#define <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE67C80)
#define <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE67C90)
#define <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE67CE0)

	inline static constexpr unsigned int <OpenPopupOnStageClear>d__68_TypeDefinitionIndex = 10498;

	class <OpenPopupOnStageClear>d__68 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 lastClearedStageId; // 0x20
		::MXField::FieldBridge* __4__this; // 0x28
		::System::Boolean alreadyCleared; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENPOPUPONSTAGECLEAR>D__68_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

