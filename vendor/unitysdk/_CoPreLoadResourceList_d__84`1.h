#pragma once
#include "unitysdk.h"

#define <COPRELOADRESOURCELIST>D__84`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COPRELOADRESOURCELIST>D__84`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COPRELOADRESOURCELIST>D__84`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <CoPreLoadResourceList>d__84`1_TypeDefinitionIndex = 3084;

	class <CoPreLoadResourceList>d__84`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		Il2CppObject* preLoadPathList; // 0x0
		Il2CppObject* __8__1; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPRELOADRESOURCELIST>D__84`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

