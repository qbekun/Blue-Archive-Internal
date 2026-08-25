#pragma once
#include "unitysdk.h"

#define <ENUMERATE>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <ENUMERATE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <ENUMERATE>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <ENUMERATE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <ENUMERATE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <ENUMERATE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <Enumerate>d__28_TypeDefinitionIndex = 25101;

	class <Enumerate>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		Il2CppObject* head; // 0x0
		Il2CppObject* tail; // 0x0
		::System::Int32 tailTail; // 0x0
		::System::Int32 headHead; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Int32 _headTail_5__2; // 0x0
		::System::Int32 _i_5__3; // 0x0
		Il2CppObject* _s_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_T_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENUMERATE>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

