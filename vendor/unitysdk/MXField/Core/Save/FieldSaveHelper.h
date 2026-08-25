#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::Save { class FieldClientSaveData; }

#define MXFIELD_CORE_SAVE_FIELDSAVEHELPER_GETPATH_OFFSET UNITYSDK_OFFSET(0xEE0B30)
#define MXFIELD_CORE_SAVE_FIELDSAVEHELPER_GET_DIRECTORYPATH_OFFSET UNITYSDK_OFFSET(0xEE0CB0)
#define MXFIELD_CORE_SAVE_FIELDSAVEHELPER_SAVEASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_SAVE_FIELDSAVEHELPER_LOAD_OFFSET UNITYSDK_OFFSET(0xEE0CF0)
#define MXFIELD_CORE_SAVE_FIELDSAVEHELPER_HASSAVEDATA_OFFSET UNITYSDK_OFFSET(0xEE0D60)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldSaveHelper_TypeDefinitionIndex = 10996;

	class FieldSaveHelper : public Il2CppObject
	{
	public:
		::System::String* GetPath(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEHELPER_GETPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_DirectoryPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEHELPER_GET_DIRECTORYPATH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* SaveAsync(Il2CppObject* arg, ::System::String* str)
		{
			return ((::System::Threading::Tasks::Task*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEHELPER_SAVEASYNC_OFFSET))(arg, str, nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* Load(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEHELPER_LOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasSaveData(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDSAVEHELPER_HASSAVEDATA_OFFSET))(arg, arg2, nullptr);
		}

	};
}

