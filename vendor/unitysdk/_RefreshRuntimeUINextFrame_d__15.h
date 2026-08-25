#pragma once
#include "unitysdk.h"

#define <REFRESHRUNTIMEUINEXTFRAME>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB4AB0)
#define <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FB5040)
#define <REFRESHRUNTIMEUINEXTFRAME>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9FB5050)
#define <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9FB50F0)
#define <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9FB5100)
#define <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9FB5150)

	inline static constexpr unsigned int <RefreshRuntimeUINextFrame>d__15_TypeDefinitionIndex = 33978;

	class <RefreshRuntimeUINextFrame>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHRUNTIMEUINEXTFRAME>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

