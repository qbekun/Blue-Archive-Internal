#pragma once
#include "unitysdk.h"

namespace MXField { class FieldGameManager; }
namespace MXField { class FieldBridge; }

#define <QUITPROCESS_OPENFIELDLOBBY>D__106_.CTOR_OFFSET UNITYSDK_OFFSET(0xE68000)
#define <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6D430)
#define <QUITPROCESS_OPENFIELDLOBBY>D__106_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE6D440)
#define <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6D5E0)
#define <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE6D5F0)
#define <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6D640)

	inline static constexpr unsigned int <QuitProcess_OpenFieldLobby>d__106_TypeDefinitionIndex = 10514;

	class <QuitProcess_OpenFieldLobby>d__106 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::FieldGameManager* __4__this; // 0x20
		::MXField::FieldBridge* _bridge_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <QUITPROCESS_OPENFIELDLOBBY>D__106_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

