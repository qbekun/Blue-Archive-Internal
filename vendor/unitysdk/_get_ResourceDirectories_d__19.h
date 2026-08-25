#pragma once
#include "unitysdk.h"

namespace MX::AssetBundles { class ResourcePatcher; }

#define <GET_RESOURCEDIRECTORIES>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x144DF10)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x144FC20)
#define <GET_RESOURCEDIRECTORIES>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x144FC30)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x144FCD0)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x144FCE0)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x144FD30)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x144FD40)
#define <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x144FDE0)

	inline static constexpr unsigned int <get_ResourceDirectories>d__19_TypeDefinitionIndex = 14989;

	class <get_ResourceDirectories>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::String* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::AssetBundles::ResourcePatcher* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::String* System.Collections.Generic.IEnumerator_System.String_.get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.STRING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.String_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.STRING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_RESOURCEDIRECTORIES>D__19_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

