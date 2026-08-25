#pragma once
#include "unitysdk.h"

namespace MX::Data { class FieldContentStageInfo; }
namespace MX::Data { class FieldContentStageData; }

#define <GETSTAGEINFOS>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x18DACE0)
#define <GETSTAGEINFOS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DAD30)
#define <GETSTAGEINFOS>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18DAD90)
#define <GETSTAGEINFOS>D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18DAFF0)
#define <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.FIELDCONTENTSTAGEINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DB040)
#define <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x18DB050)
#define <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18DB0A0)
#define <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.FIELDCONTENTSTAGEINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DB0B0)
#define <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18DB150)

	inline static constexpr unsigned int <GetStageInfos>d__8_TypeDefinitionIndex = 16122;

	class <GetStageInfos>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::FieldContentStageInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::FieldContentStageData* __4__this; // 0x28
		::System::Int64 seasonId; // 0x30
		::System::Int64 __3__seasonId; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::FieldContentStageInfo* System.Collections.Generic.IEnumerator_MX.Data.FieldContentStageInfo_.get_Current()
		{
			return (return (::MX::Data::FieldContentStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.FIELDCONTENTSTAGEINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.FieldContentStageInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.FIELDCONTENTSTAGEINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSTAGEINFOS>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

