#pragma once
#include "unitysdk.h"

#define ATTACHMENTFILTEREMBLEMOWNED_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB3CF0)
#define ATTACHMENTFILTEREMBLEMOWNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3410)
#define ATTACHMENTFILTEREMBLEMOWNED_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FB3DA0)
#define ATTACHMENTFILTEREMBLEMOWNED_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB3DB0)

	inline static constexpr unsigned int AttachmentFilterEmblemOwned_TypeDefinitionIndex = 2909;

	class AttachmentFilterEmblemOwned : public ::MX::Logic::Actions::DyingAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMOWNED_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMOWNED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMOWNED_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTFILTEREMBLEMOWNED_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

