#pragma once
#include "unitysdk.h"

#define ATTACHMENTFILTEREMBLEMSCHOOL_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB4300)
#define ATTACHMENTFILTEREMBLEMSCHOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB34D0)
#define ATTACHMENTFILTEREMBLEMSCHOOL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB4580)

	inline static constexpr unsigned int AttachmentFilterEmblemSchool_TypeDefinitionIndex = 2913;

	class AttachmentFilterEmblemSchool : public IncrementalReadState
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMSCHOOL_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMSCHOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMSCHOOL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

