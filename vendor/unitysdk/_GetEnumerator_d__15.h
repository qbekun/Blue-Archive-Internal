#pragma once
#include "unitysdk.h"

#define <GETENUMERATOR>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BBAD0)
#define <GETENUMERATOR>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BBB60)
#define <GETENUMERATOR>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96BBB70)
#define <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BBCF0)
#define <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x96BBD00)
#define <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96BBD50)

	inline static constexpr unsigned int <GetEnumerator>d__15_TypeDefinitionIndex = 33554;

	class <GetEnumerator>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ValueCollection* __4__this; // 0x20
		ExpandoData* _data_5__2; // 0x28
		::System::Int32 _i_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

