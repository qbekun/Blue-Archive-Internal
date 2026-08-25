#pragma once
#include "unitysdk.h"

class IBase;
class Leaf;

#define <GETENUMERATOR>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0xD96570)
#define <GETENUMERATOR>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD96590)
#define <GETENUMERATOR>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD965A0)
#define <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXUNDERCOVER.UCACTION.IBASE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD965F0)
#define <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD96600)
#define <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD96650)

	inline static constexpr unsigned int <GetEnumerator>d__2_TypeDefinitionIndex = 9753;

	class <GetEnumerator>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		IBase* __2__current; // 0x18
		Leaf* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		IBase* System.Collections.Generic.IEnumerator_MXUnderCover.UCAction.IBase_.get_Current()
		{
			return ((IBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXUNDERCOVER.UCACTION.IBASE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

