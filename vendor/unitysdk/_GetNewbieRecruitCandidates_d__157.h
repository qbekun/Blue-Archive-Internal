#pragma once
#include "unitysdk.h"

namespace MX::Data { class ShopData; }

#define <GETNEWBIERECRUITCANDIDATES>D__157_.CTOR_OFFSET UNITYSDK_OFFSET(0x1957130)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1959D20)
#define <GETNEWBIERECRUITCANDIDATES>D__157_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1959D80)
#define <GETNEWBIERECRUITCANDIDATES>D__157___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x195A0A0)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x195A0F0)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x195A100)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x195A150)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x195A1A0)
#define <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x195A240)

	inline static constexpr unsigned int <GetNewbieRecruitCandidates>d__157_TypeDefinitionIndex = 16397;

	class <GetNewbieRecruitCandidates>d__157 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Int64 __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::ShopData* __4__this; // 0x28
		::System::DateTime* serverTime; // 0x30
		::System::DateTime* __3__serverTime; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Int64 System.Collections.Generic.IEnumerator_System.Int64_.get_Current()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.INT64_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Int64_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.INT64_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNEWBIERECRUITCANDIDATES>D__157_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

