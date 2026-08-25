#pragma once
#include "unitysdk.h"

class EchelonListObject;
namespace MX::GameLogic::DBModel { class EchelonDB; }

#define <REMOVEOVERLAPPINGCHARACTERS>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE7670)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE7CB0)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE7CC0)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(ECHELONOBJECTECHELONOBJECT_SYSTEM.BOOLEANHASCHANGED)_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE8610)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1EE8620)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE8670)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(ECHELONOBJECTECHELONOBJECT_SYSTEM.BOOLEANHASCHANGED)_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE86C0)
#define <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE8770)

	inline static constexpr unsigned int <RemoveOverlappingCharacters>d__36_TypeDefinitionIndex = 1866;

	class <RemoveOverlappingCharacters>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		EchelonListObject* __4__this; // 0x30
		::MX::GameLogic::DBModel::EchelonDB* changedEchelonDB; // 0x38
		::MX::GameLogic::DBModel::EchelonDB* __3__changedEchelonDB; // 0x40
		::System::Int32 _index_5__2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_(EchelonObjectechelonObject_System.BooleanhasChanged)_.get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_(ECHELONOBJECTECHELONOBJECT_SYSTEM.BOOLEANHASCHANGED)_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_(EchelonObjectechelonObject_System.BooleanhasChanged)_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_(ECHELONOBJECTECHELONOBJECT_SYSTEM.BOOLEANHASCHANGED)_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMOVEOVERLAPPINGCHARACTERS>D__36_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

