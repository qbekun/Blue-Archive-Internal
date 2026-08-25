#pragma once
#include "../../unitysdk.h"

#define MX_DATA_FLATARRAYWRAPPER`1_FINDINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATARRAYWRAPPER`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATARRAYWRAPPER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATARRAYWRAPPER`1_GETELEMENTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_FLATARRAYWRAPPER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int FlatArrayWrapper`1_TypeDefinitionIndex = 16498;

	class FlatArrayWrapper`1 : public Il2CppObject
	{
	public:
		Il2CppObject* func; // 0x0
		::System::Int32 length; // 0x0

		::System::Int32 FindIndex(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAYWRAPPER`1_FINDINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAYWRAPPER`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAYWRAPPER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetElementAt(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAYWRAPPER`1_GETELEMENTAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FLATARRAYWRAPPER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

