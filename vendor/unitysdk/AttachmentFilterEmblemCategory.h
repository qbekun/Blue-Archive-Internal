#pragma once
#include "unitysdk.h"

#define ATTACHMENTFILTEREMBLEMCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3450)
#define ATTACHMENTFILTEREMBLEMCATEGORY_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3ED0)
#define ATTACHMENTFILTEREMBLEMCATEGORY_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB3FF0)

	inline static constexpr unsigned int AttachmentFilterEmblemCategory_TypeDefinitionIndex = 2910;

	class AttachmentFilterEmblemCategory : public ::MX::Logic::Actions::FollowingAction
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMCATEGORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMCATEGORY_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMCATEGORY_INITALLLIST_OFFSET))(arg, nullptr);
		}

	};

