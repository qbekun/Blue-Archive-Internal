#pragma once
#include "unitysdk.h"

#define <GETEXPANDOENUMERATOR>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BA5D0)
#define <GETEXPANDOENUMERATOR>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BDCF0)
#define <GETEXPANDOENUMERATOR>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96BDD00)
#define <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BDEB0)
#define <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x96BDEC0)
#define <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BDF10)

	inline static constexpr unsigned int <GetExpandoEnumerator>d__51_TypeDefinitionIndex = 33560;

	class <GetExpandoEnumerator>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Dynamic::ExpandoObject* __4__this; // 0x28
		::System::Int32 version; // 0x30
		ExpandoData* data; // 0x38
		::System::Int32 _i_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_System.Collections.Generic.KeyValuePair_System.String_System.Object__.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEXPANDOENUMERATOR>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

