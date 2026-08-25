#pragma once
#include "unitysdk.h"

namespace FlatData { class EmblemCategory; }

#define <GETEMBLEMCATEGORIES>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x18BA410)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BA640)
#define <GETEMBLEMCATEGORIES>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18BA710)
#define <GETEMBLEMCATEGORIES>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18BAAF0)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_FLATDATA.EMBLEMCATEGORY_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18BABB0)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x18BABC0)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18BAC10)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_FLATDATA.EMBLEMCATEGORY_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BAC60)
#define <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BACF0)

	inline static constexpr unsigned int <GetEmblemCategories>d__22_TypeDefinitionIndex = 16057;

	class <GetEmblemCategories>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::FlatData::EmblemCategory* __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x18
		::System::Collections::IEnumerator* __7__wrap1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::FlatData::EmblemCategory* System.Collections.Generic.IEnumerator_FlatData.EmblemCategory_.get_Current()
		{
			return (return (::FlatData::EmblemCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_FLATDATA.EMBLEMCATEGORY_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_FlatData.EmblemCategory_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_FLATDATA.EMBLEMCATEGORY_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEMBLEMCATEGORIES>D__22_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

