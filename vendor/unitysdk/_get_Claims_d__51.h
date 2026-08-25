#pragma once
#include "unitysdk.h"

#define <GET_CLAIMS>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C0D50)
#define <GET_CLAIMS>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x91C2160)
#define <GET_CLAIMS>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91C2220)
#define <GET_CLAIMS>D__51___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x91C26C0)
#define <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.SECURITY.CLAIMS.CLAIM_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91C2770)
#define <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x91C2780)
#define <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91C27D0)
#define <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.SECURITY.CLAIMS.CLAIM_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x91C27E0)
#define <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x91C2880)

	inline static constexpr unsigned int <get_Claims>d__51_TypeDefinitionIndex = 24419;

	class <get_Claims>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Security::Claims::Claim* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Security::Claims::ClaimsIdentity* __4__this; // 0x28
		::System::Int32 _i_5__2; // 0x30
		Il2CppObject* __7__wrap2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Security::Claims::Claim* System.Collections.Generic.IEnumerator_System.Security.Claims.Claim_.get_Current()
		{
			return (return (::System::Security::Claims::Claim*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.SECURITY.CLAIMS.CLAIM_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Security.Claims.Claim_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.SECURITY.CLAIMS.CLAIM_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_CLAIMS>D__51_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

