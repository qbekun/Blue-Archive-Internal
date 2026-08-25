#pragma once
#include "unitysdk.h"

#define <GETATTRIBUTES>D__116_.CTOR_OFFSET UNITYSDK_OFFSET(0x9859EE0)
#define <GETATTRIBUTES>D__116_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x985A9F0)
#define <GETATTRIBUTES>D__116_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x985AA00)
#define <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.XML.LINQ.XATTRIBUTE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x985AAC0)
#define <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x985AAD0)
#define <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x985AB20)
#define <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.XML.LINQ.XATTRIBUTE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x985AB30)
#define <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x985ABE0)

	inline static constexpr unsigned int <GetAttributes>d__116_TypeDefinitionIndex = 37296;

	class <GetAttributes>d__116 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Xml::Linq::XAttribute* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Xml::Linq::XElement* __4__this; // 0x28
		::System::Xml::Linq::XName* name; // 0x30
		::System::Xml::Linq::XName* __3__name; // 0x38
		::System::Xml::Linq::XAttribute* _a_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Xml::Linq::XAttribute* System.Collections.Generic.IEnumerator_System.Xml.Linq.XAttribute_.get_Current()
		{
			return (return (::System::Xml::Linq::XAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.XML.LINQ.XATTRIBUTE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Xml.Linq.XAttribute_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.XML.LINQ.XATTRIBUTE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETATTRIBUTES>D__116_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

