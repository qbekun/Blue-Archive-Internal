#pragma once
#include "unitysdk.h"

class GraphicsManager;
namespace MX::SaveData { class DeviceOption; }

#define <COINITIALIZEWINDOWMODE>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C67F0)
#define <COINITIALIZEWINDOWMODE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20CA4C0)
#define <COINITIALIZEWINDOWMODE>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20CA4D0)
#define <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CA870)
#define <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20CA880)
#define <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CA8D0)

	inline static constexpr unsigned int <CoInitializeWindowMode>d__28_TypeDefinitionIndex = 3674;

	class <CoInitializeWindowMode>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		GraphicsManager* __4__this; // 0x20
		::MX::SaveData::DeviceOption* deviceOption; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COINITIALIZEWINDOWMODE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

