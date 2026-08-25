#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYDICTIONARYHELPERS_COPYTONONGENERICICOLLECTIONHELPER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyDictionaryHelpers_TypeDefinitionIndex = 25123;

	class ReadOnlyDictionaryHelpers : public Il2CppObject
	{
	public:
		::System::Void CopyToNonGenericICollectionHelper(Il2CppObject* arg, ::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_OBJECTMODEL_READONLYDICTIONARYHELPERS_COPYTONONGENERICICOLLECTIONHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

